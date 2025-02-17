/**

  @Nom du fichier
    main.c

  @Auteur
    < À compléter>
   
  @Sommaire
    Programme qui écrit à l?écran I2C

*/

#include "mcc_generated_files/mcc.h"

#define ADDRESSE_I2C_ECRAN  40			//0x28

/*
    Début de l'application principale
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    uint8_t message[20];

    message[0]='0';
    message[1]='1';
    message[2]='2';

    while (1)
    {
        
        /* Code qui écrit 3 caractères sur l'écran
        while(I2C_Open(ADDRESSE_I2C_ECRAN) == I2C_BUSY);    //Passage de l'adresse
        I2C_SetBuffer(message, 3);                          //Passage des données
        I2C_MasterOperation(0);                             //Démarrer une opération d'écriture
        while (I2C_Close() == I2C_BUSY);                   	//Attendre que l'opération soit complète    

        __delay_ms(1000);
        */
        
        
        
        /* Code qui lit 3 octets de la mémoire EEPROM
        
        // ÉCriture de deux octets de données à la EEPROM
        while(I2C_Open(ADDRESSE_I2C_EEPROM) == I2C_BUSY);   //passage de l?adresse I2C
        I2C_SetBuffer(addr, 2);				//passage de l?adresse interne sur 2 octets
        I2C_MasterOperation(0);				//opération d?écriture pour l?adresse interne
        while (I2C_Close() == I2C_BUSY);
        __delay_ms(5);

        // Lecture de 3 octets de la EEPROM
        while(I2C_Open(ADDRESSE_I2C_EEPROM) == I2C_BUSY);	//passage de l?adresse I2C
        I2C_SetBuffer(message, 3);			//passage du tampon et du nombre de //lectures à faire
        I2C_MasterOperation(1);		//opération de lecture
        while (I2C_Close() == I2C_BUSY);
        __delay_ms(5);
        */

    }
    
}
