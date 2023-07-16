class Glass {
  constructor(color, liquid, full) {
    (this.color = color), (this.liquid = liquid), (this.full = full);
  }
  toggleLiquid(liquidType) {
    this.liquid = liquidType;
  }
}

export default Glass;
