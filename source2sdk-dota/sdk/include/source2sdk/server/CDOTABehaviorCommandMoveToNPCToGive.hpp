#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        // Size: 0x170
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToNPCToGive
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x150
            std::int32_t m_nMovementState; // 0x154
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItem;
            char m_hItem[0x4]; // 0x158
            float m_flRange; // 0x15c
            std::uint32_t m_nGiveItemIndicatorID; // 0x160
            CPlayerSlot nGiverPlayerSlot; // 0x164
            CPlayerSlot nReceiverPlayerSlot; // 0x168
            uint8_t _pad016c[0x4];
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hTarget) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_nMovementState) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hItem) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_flRange) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_nGiveItemIndicatorID) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, nGiverPlayerSlot) == 0x164);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, nReceiverPlayerSlot) == 0x168);

        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive) == 0x170);
    };
};
