#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/LaneSide_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelPlayerClipComponent.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1b00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        #pragma pack(push, 1)
        class CNPC_TrooperBoss : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad17b0[0x18]; // 0x17b0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
            // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
            // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
            source2sdk::server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x17c8            
            uint8_t _pad17e8[0x4]; // 0x17e8
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x17ec            
            uint8_t _pad17f0[0x2fc]; // 0x17f0
            // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrooperSpawnPoint;
            char m_hTrooperSpawnPoint[0x4]; // 0x1aec            
            source2sdk::client::LaneSide_t m_LaneSide; // 0x1af0            
            uint8_t _pad1af1[0x3]; // 0x1af1
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1af4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1af8            
            uint8_t _pad1afc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperBoss) == 0x1b00);
    };
};
