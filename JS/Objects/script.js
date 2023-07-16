class Glass {
  constructor(color, liquid, full) {
    (this.color = color), (this.liquid = liquid), (this.full = full);
  }
  toggleLiquid(liquidType) {
    this.liquid = liquidType;
  }
}



class Shirt {
  constructor(color, size, sleeves) {
    this.color = color;
    this.size = size;
    this.sleeves = sleeves;
  }
  toggleSleeves(sleeveLength) {
    this.sleeves = sleeveLength;
  }
}


const shirt1 = new Shirt("black", "small", 10);
const shirt2 = new Shirt("white", "big", 50);

const waterGlass = new Glass("clear", "cola", true);
const fantaGlass = new Glass("clear", "mysteryfanta", false);

console.log("The shirt objects:", shirt1, shirt2);
console.log("The glass objects:", waterGlass, fantaGlass);
