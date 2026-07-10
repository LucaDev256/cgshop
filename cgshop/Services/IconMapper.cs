using cgshop.Models;

namespace cgshop.Services
{
    public class IconMapper
    {
        private readonly Marketplace _marketplace;

        public static string GetIconName(Marketplace marketplace)
        {
            switch (marketplace)
            {
                case Marketplace.Amazon:
                    return "amazon.png";
                case Marketplace.Tiktok:
                    return "tik-tok.png";
                case Marketplace.Ebay:
                    return "ebay.png";
                case Marketplace.Vinted:
                    return "vinted.png";
                default:
                    return "noimgfound.png";
            }
        }
    }
}
