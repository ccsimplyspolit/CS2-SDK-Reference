#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTriggerAbilityVData.hpp"

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
        // Size: 0x1848
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Drifter_StalkersMark_Teleport_VData : public source2sdk::server::CBaseTriggerAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCastStartSound; // 0x1838            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_StalkersMark_Teleport_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Drifter_StalkersMark_Teleport_VData) == 0x1848);
    };
};
