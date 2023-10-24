unsigned char max_byte(unsigned short number) {
    if (number <= 255) return number;
    else {
        number = number >> (8);
        return number; 
    }
}
