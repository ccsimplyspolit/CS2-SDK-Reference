#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        struct CInfoTrooperBossSpawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CInfoTrooperSpawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x18d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
        #pragma pack(push, 1)
        class CNPC_Trooper : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x18]; // 0x17b0
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x17c8            
            std::int32_t m_iLaneSlot; // 0x17cc            
            uint8_t _pad17d0[0x30]; // 0x17d0
            // m_hSpawnWaveController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoTrooperBossSpawn> m_hSpawnWaveController;
            char m_hSpawnWaveController[0x4]; // 0x1800            
            // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoTrooperSpawn> m_hTrooperSpawnPoint;
            char m_hTrooperSpawnPoint[0x4]; // 0x1804            
            uint8_t _pad1808[0x20]; // 0x1808
            // m_hNearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hNearDeathModifier;
            char m_hNearDeathModifier[0x18]; // 0x1828            
            uint8_t _pad1840[0x8]; // 0x1840
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x1848            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNotSaved
            float m_flHealingChargeParticlePct; // 0x184c            
            uint8_t _pad1850[0x80];
            
            // Datamap fields:
            // int32_t m_iCoverGroupID; // 0x16d0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Trooper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Trooper) == 0x18d0);
    };
};
