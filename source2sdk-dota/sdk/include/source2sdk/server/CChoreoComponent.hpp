#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
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
            std::int32_t m_nExernalChoreoGraphCount; // 0x34            
            CGlobalSymbol m_sActiveExternalChoreoGraphSlotID; // 0x38            
            uint8_t _pad0040[0x30]; // 0x40
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x70            
            source2sdk::entity2::GameTime_t m_flAllowResponsesEndTime; // 0x74            
            uint8_t _pad0078[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CChoreoComponent, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_nExernalChoreoGraphCount) == 0x34);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_sActiveExternalChoreoGraphSlotID) == 0x38);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_nNextSceneEventId) == 0x70);
        static_assert(offsetof(source2sdk::server::CChoreoComponent, m_flAllowResponsesEndTime) == 0x74);
        
        static_assert(sizeof(source2sdk::server::CChoreoComponent) == 0x80);
    };
};
