#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TrainOrientationType_t.hpp"
#include "source2sdk/server/TrainVelocityType_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathTrack;
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
        // Size: 0x8a0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrackTrain : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_ppath;
            char m_ppath[0x4]; // 0x778            
            float m_length; // 0x77c            
            Vector m_vPosPrev; // 0x780            
            QAngle m_angPrev; // 0x78c            
            float m_flSpeed; // 0x798            
            Vector m_controlMins; // 0x79c            
            Vector m_controlMaxs; // 0x7a8            
            // metadata: MNotSaved
            VectorWS m_lastBlockPos; // 0x7b4            
            // metadata: MNotSaved
            std::int32_t m_lastBlockTick; // 0x7c0            
            float m_flVolume; // 0x7c4            
            float m_flBank; // 0x7c8            
            float m_oldSpeed; // 0x7cc            
            float m_flBlockDamage; // 0x7d0            
            float m_height; // 0x7d4            
            float m_maxSpeed; // 0x7d8            
            float m_dir; // 0x7dc            
            CGameSoundEventName m_iszSoundMove; // 0x7e0            
            CGameSoundEventName m_iszSoundMovePing; // 0x7e8            
            CGameSoundEventName m_iszSoundStart; // 0x7f0            
            CGameSoundEventName m_iszSoundStop; // 0x7f8            
            CGameSoundEventName m_strPathTarget; // 0x800            
            float m_flMoveSoundMinDuration; // 0x808            
            float m_flMoveSoundMaxDuration; // 0x80c            
            source2sdk::entity2::GameTime_t m_flNextMoveSoundTime; // 0x810            
            float m_flMoveSoundMinPitch; // 0x814            
            float m_flMoveSoundMaxPitch; // 0x818            
            source2sdk::server::TrainOrientationType_t m_eOrientationType; // 0x81c            
            source2sdk::server::TrainVelocityType_t m_eVelocityType; // 0x820            
            uint8_t _pad0824[0x14]; // 0x824
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x838            
            source2sdk::entity2::CEntityIOOutput m_OnNext; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x868            
            bool m_bManualSpeedChanges; // 0x880            
            uint8_t _pad0881[0x3]; // 0x881
            // metadata: MNotSaved
            float m_flDesiredSpeed; // 0x884            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flSpeedChangeTime; // 0x888            
            float m_flAccelSpeed; // 0x88c            
            float m_flDecelSpeed; // 0x890            
            // metadata: MNotSaved
            bool m_bAccelToSpeed; // 0x894            
            uint8_t _pad0895[0x3]; // 0x895
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextMPSoundTime; // 0x898            
            uint8_t _pad089c[0x4];
            
            // Datamap fields:
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputToggle; // 0x0
            // void InputResume; // 0x0
            // void InputReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedDir; // 0x0
            // float InputSetSpeedReal; // 0x0
            // float InputSetMaxSpeed; // 0x0
            // float InputSetSpeedDirAccel; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // void InputLockOrientation; // 0x0
            // void InputUnlockOrientation; // 0x0
            // int32_t volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrackTrain) == 0x8a0);
    };
};
