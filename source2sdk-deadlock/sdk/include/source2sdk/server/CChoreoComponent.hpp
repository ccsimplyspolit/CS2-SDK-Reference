#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
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
        // Standard-layout class: true
        // Size: 0x98
        // Has VTable
        #pragma pack(push, 1)
        class CChoreoComponent
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x34]; // 0x34
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x68            
            // metadata: MNotSaved
            bool m_bUpdateLayerPriorities; // 0x6c            
            uint8_t _pad006d[0x3]; // 0x6d
            // m_vecChoreoModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecChoreoModifiers;
            char m_vecChoreoModifiers[0x18]; // 0x70            
            source2sdk::entity2::GameTime_t m_flAllowResponsesEndTime; // 0x88            
            uint8_t _pad008c[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CChoreoComponent, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_nNextSceneEventId) == 0x68);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_bUpdateLayerPriorities) == 0x6c);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_vecChoreoModifiers) == 0x70);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_flAllowResponsesEndTime) == 0x88);
        
        static_assert(sizeof(source2sdk::server::CChoreoComponent) == 0x98);
    };
};
