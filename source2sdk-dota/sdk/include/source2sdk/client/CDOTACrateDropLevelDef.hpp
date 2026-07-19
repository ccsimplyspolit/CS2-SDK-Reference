#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrateDropTable.hpp"
#include "source2sdk/client/DOTACrateDropLevelDefID_t.hpp"

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
        // Size: 0x88
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTACrateDropLevelDef
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::DOTACrateDropLevelDefID_t m_unID; // 0x8            
            std::int32_t m_nCratesForGameOver; // 0xc            
            std::int32_t m_nCratesForNextLevel; // 0x10            
            float m_flCrateSpawnInterval; // 0x14            
            float m_flHazardSpawnIntervalMin; // 0x18            
            float m_flHazardSpawnIntervalMax; // 0x1c            
            float m_flPowerupInterval; // 0x20            
            float m_flPowerupChance; // 0x24            
            std::int32_t m_nMaxCratesOnLevel; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // m_vecDropTableCrates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrateDropTable> m_vecDropTableCrates;
            char m_vecDropTableCrates[0x18]; // 0x30            
            // m_vecDropTableHazards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrateDropTable> m_vecDropTableHazards;
            char m_vecDropTableHazards[0x18]; // 0x48            
            // m_vecDropTablePowerups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTACrateDropTable> m_vecDropTablePowerups;
            char m_vecDropTablePowerups[0x18]; // 0x60            
            std::int32_t m_nRotationChance; // 0x78            
            std::int32_t m_nRotationSpeedMin; // 0x7c            
            std::int32_t m_nRotationSpeedMax; // 0x80            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_unID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nCratesForGameOver) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nCratesForNextLevel) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_flCrateSpawnInterval) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_flHazardSpawnIntervalMin) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_flHazardSpawnIntervalMax) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_flPowerupInterval) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_flPowerupChance) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nMaxCratesOnLevel) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_vecDropTableCrates) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_vecDropTableHazards) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_vecDropTablePowerups) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nRotationChance) == 0x78);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nRotationSpeedMin) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropLevelDef, m_nRotationSpeedMax) == 0x80);
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropLevelDef) == 0x88);
    };
};
