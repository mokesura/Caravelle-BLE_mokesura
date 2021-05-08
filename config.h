#undef BLE_NUS_MIN_INTERVAL
#undef BLE_NUS_MAX_INTERVAL
#define BLE_NUS_MIN_INTERVAL 20
#define BLE_NUS_MAX_INTERVAL 50
#define BLE_HID_MAX_INTERVAL 60
#define BLE_HID_SLAVE_LATENCY 3

/* タップがホールドになるまでの時間 */
#define TAPPING_TERM 135
/* TAPPING_TERM以内にHOLDに設定されたキーを押しても、TAPとみなさずHOLD扱いする */
#define PERMISSIVE_HOLD
/* TAPPING_TERMを過ぎて（他に何も押さず）キーを離してもTAPのキーを出力する */
#define RETRO_TAPPING
