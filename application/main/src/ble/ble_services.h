#pragma once

#include "ble.h"
#include "../main.h"
#include <stdbool.h>
#include <stdint.h>

extern uint16_t m_conn_handle;


typedef void (*evt_handler) (enum user_ble_event arg);

/**@brief Init basic ble services
 */
void ble_services_init(evt_handler handler);

// void auth_key_reply(uint8_t* passkey);
// bool auth_key_reqired(void);

/**@brief Clear bond information from persistent storage.
 */
void delete_bonds(void);

void delete_bond_id(uint8_t id);
void restart_advertising_id(uint8_t id);
void restart_advertising_wo_whitelist();

/**@brief Init Bluetooth stack
 */
void ble_stack_init(void);

/**@brief Start Adv.
 */
void advertising_start(bool erase_bonds);

/**@brief Send passkey.
 */
void ble_passkey_send(uint8_t const * p_key);

void advertising_slow(void);
