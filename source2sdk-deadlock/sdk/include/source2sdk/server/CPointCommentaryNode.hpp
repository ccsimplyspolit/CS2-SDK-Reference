#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
        // Size: 0xb70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
        // static metadata: MNetworkVarNames "string_t m_iszTitle"
        // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
        // static metadata: MNetworkVarNames "int m_iNodeNumber"
        // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
        // static metadata: MNetworkVarNames "bool m_bListenedTo"
        #pragma pack(push, 1)
        class CPointCommentaryNode : public source2sdk::server::CBaseAnimGraph
        {
        public:
            CUtlSymbolLarge m_iszPreCommands; // 0xa90            
            CUtlSymbolLarge m_iszPostCommands; // 0xa98            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0xaa0            
            CUtlSymbolLarge m_iszViewTarget; // 0xaa8            
            // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTarget;
            char m_hViewTarget[0x4]; // 0xab0            
            // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTargetAngles;
            char m_hViewTargetAngles[0x4]; // 0xab4            
            CUtlSymbolLarge m_iszViewPosition; // 0xab8            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0xac0            
            // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPositionMover;
            char m_hViewPositionMover[0x4]; // 0xac4            
            bool m_bPreventMovement; // 0xac8            
            bool m_bUnderCrosshair; // 0xac9            
            bool m_bUnstoppable; // 0xaca            
            uint8_t _pad0acb[0x1]; // 0xacb
            source2sdk::entity2::GameTime_t m_flFinishedTime; // 0xacc            
            Vector m_vecFinishOrigin; // 0xad0            
            QAngle m_vecOriginalAngles; // 0xadc            
            QAngle m_vecFinishAngles; // 0xae8            
            bool m_bPreventChangesWhileMoving; // 0xaf4            
            bool m_bDisabled; // 0xaf5            
            uint8_t _pad0af6[0x2]; // 0xaf6
            VectorWS m_vecTeleportOrigin; // 0xaf8            
            source2sdk::entity2::GameTime_t m_flAbortedPlaybackAt; // 0xb04            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xb08            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xb20            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xb38            
            uint8_t _pad0b39[0x3]; // 0xb39
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xb3c            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0xb40            
            uint8_t _pad0b44[0x4]; // 0xb44
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0xb48            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0xb50            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0xb58            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0xb5c            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0xb60            
            uint8_t _pad0b61[0xf];
            
            // Datamap fields:
            // void InputStartCommentary; // 0x0
            // void InputStartUnstoppableCommentary; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CPointCommentaryNodeSpinThink; // 0x0
            // void CPointCommentaryNodeUpdateViewThink; // 0x0
            // void CPointCommentaryNodeUpdateViewPostThink; // 0x0
            // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCommentaryNode) == 0xb70);
    };
};
