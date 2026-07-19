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
        // Size: 0x1898
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_AirheartRocketeer4VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ChargingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ChargingModifier;
            char m_ChargingModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Movement"
            CPiecewiseCurve m_ImpulseAccelCurve; // 0x1828            
            float m_flChargingTime; // 0x1868            
            float m_flGravity; // 0x186c            
            float m_flTerminalGravity; // 0x1870            
            float m_flVelocityXYDefaultCeiling; // 0x1874            
            float m_flVelocityDecayToCeilingSpeed; // 0x1878            
            // metadata: MPropertyStartGroup "Thrust Movement"
            float m_flThrustVelocityAngleApproachTime; // 0x187c            
            float m_flThrustVelocityApproachIncreasing; // 0x1880            
            float m_flThrustVelocityApproachDecreasing; // 0x1884            
            Vector m_vThrustingVelocity; // 0x1888            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_AirheartRocketeer4VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_AirheartRocketeer4VData) == 0x1898);
    };
};
