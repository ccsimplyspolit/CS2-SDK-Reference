#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EnragedWildkin_Hurricane : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float distance; // 0x580            
            VectorWS m_vEndpoint; // 0x584            
            VectorWS m_vDashPosition; // 0x590            
            VectorWS m_vFacePosition; // 0x59c            
            Vector m_vTravelDir; // 0x5a8            
            float m_fTravelDistance; // 0x5b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EnragedWildkin_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EnragedWildkin_Hurricane) == 0x5b8);
    };
};
