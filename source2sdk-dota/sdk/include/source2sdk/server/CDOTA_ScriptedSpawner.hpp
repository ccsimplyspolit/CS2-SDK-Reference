#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDOTA_ScriptedSpawner_scripted_moveto_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x550
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_ScriptedSpawner : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad0498[0x10]; // 0x498
            CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4a8            
            std::int32_t m_nNPCType; // 0x4b0            
            bool m_bAllowRelaxation; // 0x4b4            
            bool m_bPlayPostVictoryAnims; // 0x4b5            
            bool m_bDisableAutoAttack; // 0x4b6            
            bool m_bAutomaticallyRespawn; // 0x4b7            
            bool m_bInvulnerable; // 0x4b8            
            bool m_bAllowHeroTargets; // 0x4b9            
            uint8_t _pad04ba[0x2]; // 0x4ba
            std::int32_t m_nActivityOverride; // 0x4bc            
            float m_flDuration; // 0x4c0            
            bool m_bAnimationFireOnce; // 0x4c4            
            uint8_t _pad04c5[0x3]; // 0x4c5
            // m_hMoveToTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t> m_hMoveToTargets;
            char m_hMoveToTargets[0x18]; // 0x4c8            
            source2sdk::entity2::CEntityIOOutput m_OnAllUnitsKilled; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnUnitKilled; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnHealthLow; // 0x510            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x18]; // 0x528            
            // m_hSpawnpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpawnpoint;
            char m_hSpawnpoint[0x4]; // 0x540            
            uint8_t _pad0544[0x4]; // 0x544
            CUtlSymbolLarge m_szCustomNPCName; // 0x548            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ScriptedSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ScriptedSpawner) == 0x550);
    };
};
