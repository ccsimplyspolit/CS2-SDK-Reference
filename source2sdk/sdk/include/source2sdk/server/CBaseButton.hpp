#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
        // Standard-layout class: false
        // Size: 0x8f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseButton : public source2sdk::server::CBaseToggle
        {
        public:
            QAngle m_angMoveEntitySpace; // 0x7f0            
            bool m_fStayPushed; // 0x7fc            
            bool m_fRotating; // 0x7fd            
            uint8_t _pad07fe[0x2]; // 0x7fe
            // metadata: MNotSaved
            source2sdk::server::locksound_t m_ls; // 0x800            
            CGameSoundEventName m_sUseSound; // 0x820            
            CGameSoundEventName m_sLockedSound; // 0x828            
            CGameSoundEventName m_sUnlockedSound; // 0x830            
            CUtlSymbolLarge m_sOverrideAnticipationName; // 0x838            
            bool m_bLocked; // 0x840            
            bool m_bDisabled; // 0x841            
            uint8_t _pad0842[0x2]; // 0x842
            float m_flSpeed; // 0x844            
            source2sdk::entity2::GameTime_t m_flUseLockedTime; // 0x848            
            bool m_bSolidBsp; // 0x84c            
            uint8_t _pad084d[0x3]; // 0x84d
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_OnPressed; // 0x868            
            source2sdk::entity2::CEntityIOOutput m_OnUseLocked; // 0x880            
            source2sdk::entity2::CEntityIOOutput m_OnIn; // 0x898            
            source2sdk::entity2::CEntityIOOutput m_OnOut; // 0x8b0            
            // metadata: MNotSaved
            std::int32_t m_nState; // 0x8c8            
            CEntityHandle m_hConstraint; // 0x8cc            
            CEntityHandle m_hConstraintParent; // 0x8d0            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0x8d4            
            uint8_t _pad08d5[0x3]; // 0x8d5
            CUtlSymbolLarge m_sGlowEntity; // 0x8d8            
            // metadata: MNotSaved
            // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_glowEntity;
            char m_glowEntity[0x4]; // 0x8e0            
            bool m_usable; // 0x8e4            
            uint8_t _pad08e5[0x3]; // 0x8e5
            // metadata: MNotSaved
            CUtlSymbolLarge m_szDisplayText; // 0x8e8            
            
            // Datamap fields:
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPress; // 0x0
            // void InputPressIn; // 0x0
            // void InputPressOut; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseButton) == 0x8f0);
    };
};
