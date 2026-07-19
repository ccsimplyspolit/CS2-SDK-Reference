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
        // Size: 0xa40
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointCommentaryNode : public source2sdk::server::CBaseAnimGraph
        {
        public:
            CUtlSymbolLarge m_iszPreCommands; // 0x960            
            CUtlSymbolLarge m_iszPostCommands; // 0x968            
            CUtlSymbolLarge m_iszCommentaryFile; // 0x970            
            CUtlSymbolLarge m_iszViewTarget; // 0x978            
            // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTarget;
            char m_hViewTarget[0x4]; // 0x980            
            // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTargetAngles;
            char m_hViewTargetAngles[0x4]; // 0x984            
            CUtlSymbolLarge m_iszViewPosition; // 0x988            
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0x990            
            // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPositionMover;
            char m_hViewPositionMover[0x4]; // 0x994            
            bool m_bPreventMovement; // 0x998            
            bool m_bUnderCrosshair; // 0x999            
            bool m_bUnstoppable; // 0x99a            
            uint8_t _pad099b[0x1]; // 0x99b
            source2sdk::entity2::GameTime_t m_flFinishedTime; // 0x99c            
            VectorWS m_vecFinishOrigin; // 0x9a0            
            QAngle m_vecOriginalAngles; // 0x9ac            
            QAngle m_vecFinishAngles; // 0x9b8            
            bool m_bPreventChangesWhileMoving; // 0x9c4            
            bool m_bDisabled; // 0x9c5            
            uint8_t _pad09c6[0x2]; // 0x9c6
            VectorWS m_vecTeleportOrigin; // 0x9c8            
            source2sdk::entity2::GameTime_t m_flAbortedPlaybackAt; // 0x9d4            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0x9f0            
            bool m_bActive; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xa0c            
            float m_flStartTimeInCommentary; // 0xa10            
            uint8_t _pad0a14[0x4]; // 0xa14
            CUtlSymbolLarge m_iszTitle; // 0xa18            
            CUtlSymbolLarge m_iszSpeakers; // 0xa20            
            std::int32_t m_iNodeNumber; // 0xa28            
            std::int32_t m_iNodeNumberMax; // 0xa2c            
            bool m_bListenedTo; // 0xa30            
            uint8_t _pad0a31[0xf];
            
            // Datamap fields:
            // void InputStartCommentary; // 0x0
            // void InputStartUnstoppableCommentary; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCommentaryNode) == 0xa40);
    };
};
