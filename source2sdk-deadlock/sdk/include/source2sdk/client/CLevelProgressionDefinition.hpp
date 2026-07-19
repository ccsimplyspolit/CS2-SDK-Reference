#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EBetweenValueBehavior.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLevelProgressionDefinition
        {
        public:
            source2sdk::client::EBetweenValueBehavior m_eBetweenBehavior; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_mapLevelsToValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,float> m_mapLevelsToValue;
            char m_mapLevelsToValue[0x28]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CLevelProgressionDefinition, m_eBetweenBehavior) == 0x0);
        static_assert(offsetof(source2sdk::client::CLevelProgressionDefinition, m_mapLevelsToValue) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CLevelProgressionDefinition) == 0x30);
    };
};
