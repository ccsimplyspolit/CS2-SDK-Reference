#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x80
        #pragma pack(push, 1)
        class CSceneEventInfo
        {
        public:
            std::int32_t m_iLayer; // 0x0            
            std::int32_t m_iPriority; // 0x4            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x8            
            float m_flWeight; // 0xc            
            // m_hAnimClip has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmClip> m_hAnimClip;
            char m_hAnimClip[0x8]; // 0x10            
            CGlobalSymbol m_sAnimClipSlot; // 0x18            
            CGlobalSymbol m_sAnimClipSlotWeight; // 0x20            
            bool m_bHasArrived; // 0x28            
            uint8_t _pad0029[0x3]; // 0x29
            std::int32_t m_nType; // 0x2c            
            source2sdk::entity2::GameTime_t m_flNext; // 0x30            
            bool m_bIsGesture; // 0x34            
            bool m_bShouldRemove; // 0x35            
            uint8_t _pad0036[0x26]; // 0x36
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5c            
            // m_hModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_hModifier;
            char m_hModifier[0x18]; // 0x60            
            source2sdk::client::SceneEventId_t m_nSceneEventId; // 0x78            
            bool m_bClientSide; // 0x7c            
            bool m_bStarted; // 0x7d            
            uint8_t _pad007e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iLayer) == 0x0);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iPriority) == 0x4);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hSequence) == 0x8);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flWeight) == 0xc);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hAnimClip) == 0x10);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_sAnimClipSlot) == 0x18);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_sAnimClipSlotWeight) == 0x20);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bHasArrived) == 0x28);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nType) == 0x2c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flNext) == 0x30);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bIsGesture) == 0x34);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bShouldRemove) == 0x35);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hTarget) == 0x5c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hModifier) == 0x60);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nSceneEventId) == 0x78);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bClientSide) == 0x7c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bStarted) == 0x7d);
        
        static_assert(sizeof(source2sdk::client::CSceneEventInfo) == 0x80);
    };
};
