#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoWorldLayer : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x600            
            // metadata: MNotSaved
            CUtlSymbolLarge m_worldName; // 0x618            
            // metadata: MNotSaved
            CUtlSymbolLarge m_layerName; // 0x620            
            bool m_bWorldLayerVisible; // 0x628            
            bool m_bEntitiesSpawned; // 0x629            
            bool m_bCreateAsChildSpawnGroup; // 0x62a            
            uint8_t _pad062b[0x1]; // 0x62b
            // metadata: MNotSaved
            std::uint32_t m_hLayerSpawnGroup; // 0x62c            
            // metadata: MNotSaved
            bool m_bWorldLayerActuallyVisible; // 0x630            
            uint8_t _pad0631[0x7];
            
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
        
        static_assert(sizeof(source2sdk::client::CInfoWorldLayer) == 0x638);
    };
};
