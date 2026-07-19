#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Fathom_ReefdwellerHarpoon_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DetachBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff> m_DetachBuff;
            char m_DetachBuff[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSwapStarted; // 0x1828            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1838            
            // metadata: MPropertyStartGroup "+Harpoon Properties"
            float m_flAirSpeedMax; // 0x18c0            
            float m_flFallSpeedMax; // 0x18c4            
            float m_flAirDrag; // 0x18c8            
            float m_flInitialSlowSpeed; // 0x18cc            
            float m_flInitialSpeedBias; // 0x18d0            
            float m_flMaxSurfacePitch; // 0x18d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_ReefdwellerHarpoon_VData) == 0x18d8);
    };
};
