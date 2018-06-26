#ifndef MCP2035_h
#define MCP2035_h
#endif

enum state {
    POR,
    READY,
    OPERATION,
    POWERDOWN,
    TRANSMITTEROFF
}
/*Default values. Set the values to the pins used on microcontroller*/
enum pin {
   Vbb,
   CS,
   Vss,
   Lbus,
   Rxd,
   Txd,
   RESET,
   Vreg
}
