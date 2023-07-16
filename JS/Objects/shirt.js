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

export default Shirt;
