void main(void) 
{	
    // This won't produce a compilation error
    static_assert(4 <= sizeof(float), "Float size is too small");

    // These will produce compilation errors
    static_assert(5 <= sizeof(float), "Float size is too small");
    static_assert(2 + 2 == 5, "Whaat");
}
