#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
    };
};

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
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CChoreoComponent
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseModelEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x34]; // 0x34
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x68            
            source2sdk::entity2::GameTime_t m_flAllowResponsesEndTime; // 0x6c            
            uint8_t _pad0070[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CChoreoComponent, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::CChoreoComponent, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::client::CChoreoComponent, m_nNextSceneEventId) == 0x68);
        static_assert(offsetof(source2sdk::client::CChoreoComponent, m_flAllowResponsesEndTime) == 0x6c);
        
        static_assert(sizeof(source2sdk::client::CChoreoComponent) == 0x78);
    };
};
