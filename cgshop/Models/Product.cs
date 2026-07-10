using System.Text.Json.Serialization;

namespace cgshop.Models
{
    public enum Marketplace { Amazon, Etsy, Tiktok, Vinted, Ebay}

    public class Product(string name, float price, float weight, string uRLImage, string productURL, Marketplace marketplace)
    {
        public string Name { get; set; } = name;
        public float Price { get; set; } = price;
        public float Weight { get; set; } = weight;
        public string URLImage { get; set; } = uRLImage;
        public string ProductURL { get; set; } = productURL;

        [JsonConverter(typeof(JsonStringEnumConverter))]
        public Marketplace Marketplace { get; set; } = marketplace;
    }
}
