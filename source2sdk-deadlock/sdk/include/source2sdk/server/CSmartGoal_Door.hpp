#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/INavSmartGoal.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        #pragma pack(push, 1)
        class CSmartGoal_Door : public source2sdk::server::INavSmartGoal
        {
        public:
            // m_hDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDoor;
            char m_hDoor[0x4]; // 0x10            
            // m_hPathCornerGoalPostDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPathCornerGoalPostDoor;
            char m_hPathCornerGoalPostDoor[0x4]; // 0x14            
            // m_hModifierInteractionIKLock has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hModifierInteractionIKLock;
            char m_hModifierInteractionIKLock[0x18]; // 0x18            
            VectorWS m_vGoalPostDoor; // 0x30            
            source2sdk::client::MoveType_t m_PrevMoveType; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            float m_flDoorSpeed; // 0x40            
            bool m_bUseAnimatedInteraction; // 0x44            
            bool m_bOpenAway; // 0x45            
            uint8_t _pad0046[0x2]; // 0x46
            std::int32_t m_nState; // 0x48            
            bool m_bInterrupted; // 0x4c            
            uint8_t _pad004d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartGoal_Door because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSmartGoal_Door) == 0x50);
    };
};
