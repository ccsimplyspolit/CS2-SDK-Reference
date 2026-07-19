#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/PathMoverEntitySpawn.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Size: 0x568
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathMoverEntitySpawner : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_szSpawnTemplates[4]; // 0x498            
            std::int32_t m_nSpawnIndex; // 0x4b8            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x4bc            
            float m_flSpawnFrequencySeconds; // 0x4c0            
            float m_flSpawnFrequencyDistToNearestMover; // 0x4c4            
            // m_mapSpawnedMoverTemplates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CHandle<source2sdk::server::CFuncMover>,source2sdk::server::PathMoverEntitySpawn> m_mapSpawnedMoverTemplates;
            char m_mapSpawnedMoverTemplates[0x20]; // 0x4c8            
            std::int32_t m_nMaxActive; // 0x4e8            
            std::int32_t m_nSpawnNum; // 0x4ec            
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x4f0            
            bool m_bEnabled; // 0x4f4            
            bool m_bDestroyMoverOnArrivedAtEnd; // 0x4f5            
            uint8_t _pad04f6[0x2]; // 0x4f6
            // m_vecQueuedRemovals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFuncMover>> m_vecQueuedRemovals;
            char m_vecQueuedRemovals[0x18]; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnTemplateSpawned; // 0x510            
            source2sdk::entity2::CEntityIOOutput m_OnTemplateGroupSpawned; // 0x528            
            CUtlSymbolLarge m_iszPathMoverName; // 0x540            
            bool m_bPrepopulateOnSpawn; // 0x548            
            uint8_t _pad0549[0x7]; // 0x549
            CUtlSymbolLarge m_iszPathNodeStartName; // 0x550            
            uint8_t _pad0558[0x10];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputRemoveFromTemplate; // 0x0
            // void InputSpawn; // 0x0
            // CUtlSymbolLarge InputSetPathNodeStart; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMoverEntitySpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMoverEntitySpawner) == 0x568);
    };
};
