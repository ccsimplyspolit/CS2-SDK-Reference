#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatGoatFlipVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Motion"
            CPiecewiseCurve m_ChargingSpeedCurve; // 0x1818            
            CPiecewiseCurve m_GoingUpSpeedCurve; // 0x1858            
            float m_flGroundBreakOffAngle; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_Charging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_Charging;
            char m_Charging[0x10]; // 0x18a0            
            // m_GoatGoingUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GoatGoingUp;
            char m_GoatGoingUp[0x10]; // 0x18b0            
            // m_DamageBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DamageBuff;
            char m_DamageBuff[0x10]; // 0x18c0            
            // m_EmpowerMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_EmpowerMelee;
            char m_EmpowerMelee[0x10]; // 0x18d0            
            // m_LingeringAirControl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LingeringAirControl;
            char m_LingeringAirControl[0x10]; // 0x18e0            
            // metadata: MPropertyStartGroup "Motion"
            float m_flDelayBeforeCasterRegainsControlAfterFlip; // 0x18f0            
            uint8_t _pad18f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatGoatFlipVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPunkgoatGoatFlipVData) == 0x18f8);
    };
};
