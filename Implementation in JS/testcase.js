var intent_val = {
    "items": [
        {
            "product": {
                "id": 44
            },
            "itemId": 1805960280,
            "quantity": 0
        }
    ],
    "explicitPromo": {
        "promoCode": null
    }
};

console.log(intent_val.items[0].product);

if (intent_val.items[0].product.hasOwnProperty('id')) {
    if ('id' in intent_val.items[0].product != undefined && 'id' in intent_val.items[0].product != "") {
        console.log(intent_val.items[0].product['id'])
    }
}