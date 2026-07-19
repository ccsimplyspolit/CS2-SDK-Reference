#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoWorldLayer : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x498            
            // metadata: MNotSaved
            CUtlSymbolLarge m_worldName; // 0x4b0            
            // metadata: MNotSaved
            CUtlSymbolLarge m_layerName; // 0x4b8            
            bool m_bWorldLayerVisible; // 0x4c0            
            bool m_bEntitiesSpawned; // 0x4c1            
            bool m_bCreateAsChildSpawnGroup; // 0x4c2            
            uint8_t _pad04c3[0x1]; // 0x4c3
            // metadata: MNotSaved
            std::uint32_t m_hLayerSpawnGroup; // 0x4c4            
            
            // Datamap fields:
            // void ShowWorldLayer; // 0x0
            // void HideWorldLayer; // 0x0
            // void SpawnEntities; // 0x0
            // void DestroyEntities; // 0x0
            // void ShowWorldLayerAndSpawnEntities; // 0x0
            // void HideWorldLayerAndDestroyEntities; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoWorldLayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoWorldLayer) == 0x4c8);
    };
};
