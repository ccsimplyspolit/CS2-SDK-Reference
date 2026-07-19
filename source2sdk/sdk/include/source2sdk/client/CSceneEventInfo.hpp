#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmClip.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        #pragma pack(push, 1)
        class CSceneEventInfo
        {
        public:
            std::int32_t m_iLayer; // 0x0            
            std::int32_t m_iPriority; // 0x4            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x8            
            float m_flWeight; // 0xc            
            float m_flLastAccumulatedTime; // 0x10            
            float m_flLastJumpFromTime; // 0x14            
            float m_flLastJumpToTime; // 0x18            
            float m_flLastCycle; // 0x1c            
            // m_hAnimClip has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmClip> m_hAnimClip;
            char m_hAnimClip[0x8]; // 0x20            
            CGlobalSymbol m_sAnimClipSlot; // 0x28            
            CGlobalSymbol m_sAnimClipSlotWeight; // 0x30            
            bool m_bHasArrived; // 0x38            
            uint8_t _pad0039[0x3]; // 0x39
            std::int32_t m_nType; // 0x3c            
            source2sdk::entity2::GameTime_t m_flNext; // 0x40            
            bool m_bIsGesture; // 0x44            
            bool m_bShouldRemove; // 0x45            
            uint8_t _pad0046[0x26]; // 0x46
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x6c            
            source2sdk::client::SceneEventId_t m_nSceneEventId; // 0x70            
            bool m_bClientSide; // 0x74            
            bool m_bStarted; // 0x75            
            uint8_t _pad0076[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iLayer) == 0x0);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iPriority) == 0x4);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hSequence) == 0x8);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flWeight) == 0xc);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flLastAccumulatedTime) == 0x10);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flLastJumpFromTime) == 0x14);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flLastJumpToTime) == 0x18);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flLastCycle) == 0x1c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hAnimClip) == 0x20);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_sAnimClipSlot) == 0x28);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_sAnimClipSlotWeight) == 0x30);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bHasArrived) == 0x38);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nType) == 0x3c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flNext) == 0x40);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bIsGesture) == 0x44);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bShouldRemove) == 0x45);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hTarget) == 0x6c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nSceneEventId) == 0x70);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bClientSide) == 0x74);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bStarted) == 0x75);
        
        static_assert(sizeof(source2sdk::client::CSceneEventInfo) == 0x78);
    };
};
