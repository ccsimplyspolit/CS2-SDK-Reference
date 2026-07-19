#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointPrefab : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            CUtlSymbolLarge m_targetMapName; // 0x4a8            
            CUtlSymbolLarge m_forceWorldGroupID; // 0x4b0            
            CUtlSymbolLarge m_associatedRelayTargetName; // 0x4b8            
            bool m_fixupNames; // 0x4c0            
            bool m_bLoadDynamic; // 0x4c1            
            uint8_t _pad04c2[0x2]; // 0x4c2
            // m_associatedRelayEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointPrefab> m_associatedRelayEntity;
            char m_associatedRelayEntity[0x4]; // 0x4c4            
            // m_ProceduralRelaySources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_ProceduralRelaySources;
            char m_ProceduralRelaySources[0x18]; // 0x4c8            
            uint8_t _pad04e0[0x50];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPrefab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPrefab) == 0x530);
    };
};
