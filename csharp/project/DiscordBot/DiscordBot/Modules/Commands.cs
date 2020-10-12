using Discord;
using Discord.Commands;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DiscordBot.Modules
{
    public class Commands : ModuleBase<SocketCommandContext>
    {
        [Command("ping")]
        public async Task PingAsync()
        {
            await ReplyAsync("Pong!");
        }

        [Command("regles")]
        public async Task ReglesAsync()
        {
            //await ReplyAsync("Les règles sont : \n Pas d'insulte \n Pas de menace d'attaque \n Pas d'image pornographique, sexuel, raciste... \n Merci.");

            var embed = new EmbedBuilder();

            embed.WithTitle("<-- Règles du serveur -->");
            embed.WithDescription("Règles à respecter pour le bien de tous et le votre.");
            embed.AddField("1", "Pas d'insulte.");
            embed.AddField("2", "Pas de menace d'attaque à la vie d'une personne.");
            embed.AddField("3", "Pas d'image sexuel, pornographique,raciste...");
            embed.AddField("4", "Pas d'harcèlement.");
            embed.WithFooter("<-- De : Program et le Staff -->");

            await ReplyAsync(embed: embed.Build());
        }

        [Command("avatar")]
        public async Task AvatarAsync(ushort size = 512)
        {
            await ReplyAsync("Votre avatar :");
            await ReplyAsync(CDN.GetUserAvatarUrl(Context.User.Id, Context.User.AvatarId, size, ImageFormat.Auto));
        }

        [Command("dire")]
        public async Task DireAsync(string text)
        {
            await ReplyAsync(text);
        }

        [Command("merci")]
        public async Task MerciAsync()
        {
            await ReplyAsync("De rien :)");
        }

        [Command("react")]
        public async Task DireAsync(string text, string Emoji)
        {
            var message = await Context.Channel.SendMessageAsync(text);
            var emoji = new Emoji(Emoji);

            await message.AddReactionAsync(emoji);
        }

        [Command("embed")]
        public async Task EmbedAsync()
        {
            var embed = new EmbedBuilder();

            embed.WithTitle("Titre du embed");
            embed.WithDescription("Description du embed");
            embed.AddField("Titre du text","Text ajouté");
            embed.WithFooter("Voici le bas du embed");

            await ReplyAsync(embed: embed.Build());
        }
    }
}