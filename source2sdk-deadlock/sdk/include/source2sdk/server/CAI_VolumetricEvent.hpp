#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_VolumetricEventCategory_t.hpp"
#include "source2sdk/server/AI_VolumetricEventChannel_t.hpp"
#include "source2sdk/server/AI_VolumetricEventFlags_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/AI_VolumetricEventTypeMask_t.hpp"
#include "source2sdk/server/AI_VolumetricEventType_t.hpp"
#include "source2sdk/server/CRelativeLocation.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        #pragma pack(push, 1)
        class CAI_VolumetricEvent
        {
        public:
            source2sdk::server::AI_VolumetricEventHandle_t m_hHandle; // 0x0            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            source2sdk::server::AI_VolumetricEventTypeMask_t m_nTypeMask; // 0x10            
            source2sdk::server::AI_VolumetricEventFlags_t m_nFlags; // 0x18            
            source2sdk::server::AI_VolumetricEventType_t m_nPrimaryType; // 0x1a            
            source2sdk::server::AI_VolumetricEventChannel_t m_nChannel; // 0x1b            
            source2sdk::server::AI_VolumetricEventCategory_t m_nCategory; // 0x1c            
            uint8_t _pad001d[0x3]; // 0x1d
            float m_flRadius; // 0x20            
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0x24            
            uint8_t _pad0028[0x8]; // 0x28
            source2sdk::server::CRelativeLocation m_vOrigin; // 0x30            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x70            
            uint8_t _pad0074[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_hHandle) == 0x0);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_hOwner) == 0x8);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_nTypeMask) == 0x10);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_nFlags) == 0x18);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_nPrimaryType) == 0x1a);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_nChannel) == 0x1b);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_nCategory) == 0x1c);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_flRadius) == 0x20);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_flExpireTime) == 0x24);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_vOrigin) == 0x30);
        static_assert(offsetof(source2sdk::server::CAI_VolumetricEvent, m_hTarget) == 0x70);
        
        static_assert(sizeof(source2sdk::server::CAI_VolumetricEvent) == 0x78);
    };
};
