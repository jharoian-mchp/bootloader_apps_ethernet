/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "toolchain_specifics.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                     0
#define SYS_TIME_MAX_TIMERS                  5
#define SYS_TIME_HW_COUNTER_WIDTH            16
#define SYS_TIME_HW_COUNTER_PERIOD           0xFFFFU
#define SYS_TIME_HW_COUNTER_HALF_PERIOD	     (SYS_TIME_HW_COUNTER_PERIOD>>1)
#define SYS_TIME_CPU_CLOCK_FREQUENCY         120000000
#define SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES      (188)



// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************


/*** MIIM Driver Configuration ***/
#define DRV_MIIM_ETH_MODULE_ID              GMAC_BASE_ADDRESS
#define DRV_MIIM_INSTANCES_NUMBER           1
#define DRV_MIIM_INSTANCE_OPERATIONS        4
#define DRV_MIIM_INSTANCE_CLIENTS           2
#define DRV_MIIM_CLIENT_OP_PROTECTION   false
#define DRV_MIIM_COMMANDS   false
#define DRV_MIIM_DRIVER_OBJECT              DRV_MIIM_OBJECT_BASE_Default
#define DRV_MIIM_DRIVER_INDEX               DRV_MIIM_INDEX_0              





// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************
/*** TCPIP MAC Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY				1
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY				1
#define TCPIP_GMAC_RX_BUFF_SIZE_DUMMY				    	64
#define TCPIP_GMAC_TX_BUFF_SIZE_DUMMY				    	64

/*** QUEUE 0 Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE0				10
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE0				10
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE0				    	1536
#define TCPIP_GMAC_TX_BUFF_SIZE_QUE0				    	1536
#define TCPIP_GMAC_RX_BUFF_COUNT_QUE0				   		12
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE0				1
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE0					1






#define TCPIP_GMAC_RX_MAX_FRAME		    			1536
#define TCPIP_GMAC_RX_FILTERS                       \
                                                    TCPIP_MAC_RX_FILTER_TYPE_BCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_MCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_UCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_CRC_ERROR_REJECT |\
                                                    0
#define TCPIP_GMAC_ETH_OPEN_FLAGS       			\
                                                    TCPIP_ETH_OPEN_AUTO |\
                                                    TCPIP_ETH_OPEN_FDUPLEX |\
                                                    TCPIP_ETH_OPEN_HDUPLEX |\
                                                    TCPIP_ETH_OPEN_100 |\
                                                    TCPIP_ETH_OPEN_10 |\
                                                    TCPIP_ETH_OPEN_MDIX_AUTO |\
                                                    TCPIP_ETH_OPEN_RMII |\
                                                    0

#define TCPIP_INTMAC_MODULE_ID		    			GMAC_BASE_ADDRESS
#define TCPIP_INTMAC_PERIPHERAL_CLK  				120000000

#define DRV_GMAC_RX_CHKSM_OFFLOAD				(TCPIP_MAC_CHECKSUM_NONE)			
#define DRV_GMAC_TX_CHKSM_OFFLOAD				(TCPIP_MAC_CHECKSUM_NONE)		

#define DRV_GMAC_INSTANCES_NUMBER				1
#define DRV_GMAC_NUMBER_OF_QUEUES				1
#define DRV_GMAC_CLIENTS_NUMBER					1
#define DRV_GMAC_INDEX	    	    				1
#define DRV_GMAC_PERIPHERAL_ID					1
#define DRV_GMAC_INTERRUPT_SOURCE				GMAC_IRQn

#define DRV_GMAC_INTERRUPT_MODE        				true
#define DRV_GMAC_RMII_MODE					0



/*** UDP Configuration ***/
#define TCPIP_UDP_MAX_SOCKETS		                	10
#define TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE		    	512
#define TCPIP_UDP_SOCKET_DEFAULT_TX_QUEUE_LIMIT    	 	3
#define TCPIP_UDP_SOCKET_DEFAULT_RX_QUEUE_LIMIT			3
#define TCPIP_UDP_USE_POOL_BUFFERS   false
#define TCPIP_UDP_USE_TX_CHECKSUM             			true
#define TCPIP_UDP_USE_RX_CHECKSUM             			true
#define TCPIP_UDP_COMMANDS   false
#define TCPIP_UDP_EXTERN_PACKET_PROCESS   false



/*** ARP Configuration ***/
#define TCPIP_ARP_CACHE_ENTRIES                 		5
#define TCPIP_ARP_CACHE_DELETE_OLD		        	true
#define TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO			1200
#define TCPIP_ARP_CACHE_PENDING_ENTRY_TMO			60
#define TCPIP_ARP_CACHE_PENDING_RETRY_TMO			2
#define TCPIP_ARP_CACHE_PERMANENT_QUOTA		    		50
#define TCPIP_ARP_CACHE_PURGE_THRESHOLD		    		75
#define TCPIP_ARP_CACHE_PURGE_QUANTA		    		1
#define TCPIP_ARP_CACHE_ENTRY_RETRIES		    		3
#define TCPIP_ARP_GRATUITOUS_PROBE_COUNT			1
#define TCPIP_ARP_TASK_PROCESS_RATE		        	2
#define TCPIP_ARP_PRIMARY_CACHE_ONLY		        	true



/* Network Configuration Index 0 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX0	"GMAC"
#define TCPIP_IF_GMAC

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX0				"MCHPBOARD_C"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX0				"00:04:25:1C:A0:02"

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX0			"192.168.1.11"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX0			"255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX0			"192.168.1.11"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX0				"192.168.1.11"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX0			"0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX0			"full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX0			\
													TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_IP_STATIC
													
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX0			DRV_GMAC_Object



#define TCPIP_INTMAC_PHY_CONFIG_FLAGS              	( 0 \
                                                    | DRV_ETHPHY_CFG_RMII \
                                                    )

#define TCPIP_INTMAC_PHY_LINK_INIT_DELAY            500
#define TCPIP_INTMAC_PHY_ADDRESS                    0
#define DRV_ETHPHY_INSTANCES_NUMBER                 1
#define DRV_ETHPHY_CLIENTS_NUMBER                   1
#define DRV_ETHPHY_INDEX                            1
#define DRV_ETHPHY_PERIPHERAL_ID                    1
#define DRV_ETHPHY_NEG_INIT_TMO                     1
#define DRV_ETHPHY_NEG_DONE_TMO                     2000
#define DRV_ETHPHY_RESET_CLR_TMO                    500



/*** IPv4 Configuration ***/
#define TCPIP_IPV4_EXTERN_PACKET_PROCESS   false



/*** TCPIP Heap Configuration ***/

#define TCPIP_STACK_USE_INTERNAL_HEAP
#define TCPIP_STACK_DRAM_SIZE                       39250
#define TCPIP_STACK_DRAM_RUN_LIMIT                  2048

#define TCPIP_STACK_MALLOC_FUNC                     malloc

#define TCPIP_STACK_CALLOC_FUNC                     calloc

#define TCPIP_STACK_FREE_FUNC                       free



#define TCPIP_STACK_HEAP_USE_FLAGS                   TCPIP_STACK_HEAP_FLAG_ALLOC_UNCACHED

#define TCPIP_STACK_HEAP_USAGE_CONFIG                TCPIP_STACK_HEAP_USE_DEFAULT

#define TCPIP_STACK_SUPPORTED_HEAPS                  1




// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Stack Configuration
// *****************************************************************************
// *****************************************************************************

#define TCPIP_STACK_USE_IPV4
#define TCPIP_STACK_USE_UDP

#define TCPIP_STACK_TICK_RATE		        		5
#define TCPIP_STACK_SECURE_PORT_ENTRIES             10

#define TCPIP_STACK_ALIAS_INTERFACE_SUPPORT   false

#define TCPIP_PACKET_LOG_ENABLE     0

/* TCP/IP stack event notification */
#define TCPIP_STACK_USE_EVENT_NOTIFICATION
#define TCPIP_STACK_USER_NOTIFICATION   false
#define TCPIP_STACK_DOWN_OPERATION   true
#define TCPIP_STACK_IF_UP_DOWN_OPERATION   true
#define TCPIP_STACK_MAC_DOWN_OPERATION  true
#define TCPIP_STACK_INTERFACE_CHANGE_SIGNALING   false
#define TCPIP_STACK_CONFIGURATION_SAVE_RESTORE   true
#define TCPIP_STACK_EXTERN_PACKET_PROCESS   false








// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/