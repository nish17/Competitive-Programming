let cart_data = [
    {
        "itemId": 2064592817,
        "productid": 4051,
        "name": "Paneer Makhani",
        "pizza_size": "Regular",
        "pizza_size_id": 6,
        "pizza_crust": "Cheese Burst",
        "pizza_crust_id": 115,
        "price": 280,
        "item_quantity": 1
    },
    {
        "itemId": 1508085109,
        "productid": 44,
        "name": " Choco Lava Cake",
        "price": 99,
        "item_quantity": 1
    },
    {
        "itemId": 1816561479,
        "productid": 44,
        "name": " Choco Lava Cake",
        "price": 99,
        "item_quantity": 1
    },
    {
        "itemId": 1459486472,
        "productid": 44,
        "name": " Choco Lava Cake",
        "price": 99,
        "item_quantity": 1
    }
];

cart_data.forEach((item) => {
    if (item.name.includes("Choco Lava Cake")) {
        console.log(item.itemId);
        return;
    }
})
console.log("==============");
let item_details = {};
let quantity = 1;
let productid = 44;
for (item of cart_data) {
    if (item.name.includes("Choco Lava Cake")) {
        item_details["itemId"] = item.itemId;
        item_details["quantity"] = quantity;
        item_details["product"] = { ["id"]: productid };
        console.log(item.itemId);
        break;
    }
}
let final = [];
console.log("==============");
final.push(item_details);
console.log(item_details);
console.log(final);