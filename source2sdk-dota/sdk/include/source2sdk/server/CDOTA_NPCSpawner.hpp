#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_NPCSpawner : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_szNPCScriptName; // 0x498            
            CUtlSymbolLarge m_szNPCName; // 0x4a0            
            CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4a8            
            source2sdk::server::CountdownTimer m_SpawnTimer; // 0x4b0            
            source2sdk::server::CountdownTimer m_IntervalTimer; // 0x4c8            
            std::int32_t m_iTeam; // 0x4e0            
            std::int32_t m_iUpgradeMelee; // 0x4e4            
            std::int32_t m_iUpgradeRange; // 0x4e8            
            std::int32_t m_iMeleeCount; // 0x4ec            
            std::int32_t m_iSiegeCount; // 0x4f0            
            std::int32_t m_iRangeCount; // 0x4f4            
            std::int32_t m_iWaves; // 0x4f8            
            bool m_bFirstWave; // 0x4fc            
            bool m_bShouldSpawnStrongCreep; // 0x4fd            
            bool m_bEnabled; // 0x4fe            
            uint8_t _pad04ff[0x1]; // 0x4ff
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x18]; // 0x500            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPCSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPCSpawner) == 0x518);
    };
};
