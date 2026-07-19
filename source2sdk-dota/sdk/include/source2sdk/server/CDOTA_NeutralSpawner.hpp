#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_NeutralSpawner : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bGameStarted; // 0x498            
            bool m_bFirstSpawn; // 0x499            
            uint8_t _pad049a[0x6]; // 0x49a
            source2sdk::server::CountdownTimer m_SpawnTimer; // 0x4a0            
            std::int32_t m_iNextSpawnType; // 0x4b8            
            std::int32_t m_iMinSpawnType; // 0x4bc            
            std::int32_t m_iMaxSpawnType; // 0x4c0            
            std::int32_t m_iSpawnSubtype; // 0x4c4            
            std::int32_t m_iPreviousSpawnType; // 0x4c8            
            std::int32_t m_iTotalToSpawn; // 0x4cc            
            std::int32_t m_iForcedSpawnType; // 0x4d0            
            std::int32_t m_iNumBatchesToSpawn; // 0x4d4            
            std::int32_t m_iMaxUpgradeCount; // 0x4d8            
            std::int32_t m_iCurrentUpgradeCount; // 0x4dc            
            std::int32_t m_iBaseType; // 0x4e0            
            bool m_bLimitedBatches; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            source2sdk::client::PlayerID_t m_iStackingCreditPlayerID; // 0x4e8            
            float m_fInternalSpawnTimerTime; // 0x4ec            
            source2sdk::server::CountdownTimer m_InternalSpawnTimer; // 0x4f0            
            source2sdk::server::CountdownTimer m_FXTimer; // 0x508            
            // m_PendingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_PendingUnits;
            char m_PendingUnits[0x18]; // 0x520            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x18]; // 0x538            
            std::int32_t m_iNextTypeUnitCount; // 0x550            
            bool m_bSeenClearedByTeam[2]; // 0x554            
            uint8_t _pad0556[0x2]; // 0x556
            CUtlSymbolLarge m_szVolumeName; // 0x558            
            // m_hVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hVolumes;
            char m_hVolumes[0x18]; // 0x560            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnerExhausted; // 0x578            
            std::int32_t m_Type; // 0x590            
            std::int32_t m_PullType; // 0x594            
            std::int32_t m_AggroType; // 0x598            
            uint8_t _pad059c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NeutralSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NeutralSpawner) == 0x5a0);
    };
};
