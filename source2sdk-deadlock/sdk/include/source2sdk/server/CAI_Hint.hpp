#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CServerOnlyEntity.hpp"
#include "source2sdk/server/HintNodeData.hpp"
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
        // Size: 0x588
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Hint : public source2sdk::server::CServerOnlyEntity
        {
        public:
            source2sdk::server::HintNodeData m_NodeData; // 0x4a0            
            // m_hHintOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHintOwner;
            char m_hHintOwner[0x4]; // 0x4e0            
            source2sdk::entity2::GameTime_t m_flNextUseTime; // 0x4e4            
            // m_OnNPCStartedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStartedUsing;
            char m_OnNPCStartedUsing[0x20]; // 0x4e8            
            // m_OnNPCStoppedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStoppedUsing;
            char m_OnNPCStoppedUsing[0x20]; // 0x508            
            float m_nodeFOV; // 0x528            
            bool m_bNodeFOVCheckBehind; // 0x52c            
            uint8_t _pad052d[0x3]; // 0x52d
            Vector m_vecForward; // 0x530            
            uint8_t _pad053c[0x4]; // 0x53c
            CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x540            
            CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x548            
            CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x550            
            CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x558            
            CUtlSymbolLarge m_iszNavlinkTargetName; // 0x560            
            bool m_bRemoveOnUnreserved; // 0x568            
            uint8_t _pad0569[0x3]; // 0x569
            // m_hAssociatedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssociatedEntity;
            char m_hAssociatedEntity[0x4]; // 0x56c            
            float m_flInteractionDistance; // 0x570            
            float m_flCooldown; // 0x574            
            CUtlSymbolLarge m_iszNPCFollowsEntity; // 0x578            
            float m_flNPCSnapToHintDistance; // 0x580            
            uint8_t _pad0584[0x4];
            
            // Datamap fields:
            // void CAI_HintEnableThink; // 0x0
            // void InputEnableHint; // 0x0
            // void InputDisableHint; // 0x0
            // void InputToggleHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Hint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Hint) == 0x588);
    };
};
