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
        // Size: 0x900
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
        // static metadata: MNetworkVarNames "bool m_usable"
        // static metadata: MNetworkVarNames "string_t m_szDisplayText"
        #pragma pack(push, 1)
        class CBaseButton : public source2sdk::server::CBaseToggle
        {
        public:
            QAngle m_angMoveEntitySpace; // 0x800            
            bool m_fStayPushed; // 0x80c            
            bool m_fRotating; // 0x80d            
            uint8_t _pad080e[0x2]; // 0x80e
            // metadata: MNotSaved
            source2sdk::server::locksound_t m_ls; // 0x810            
            CUtlSymbolLarge m_sUseSound; // 0x830            
            CUtlSymbolLarge m_sLockedSound; // 0x838            
            CUtlSymbolLarge m_sUnlockedSound; // 0x840            
            CUtlSymbolLarge m_sOverrideAnticipationName; // 0x848            
            bool m_bLocked; // 0x850            
            bool m_bDisabled; // 0x851            
            uint8_t _pad0852[0x2]; // 0x852
            source2sdk::entity2::GameTime_t m_flUseLockedTime; // 0x854            
            bool m_bSolidBsp; // 0x858            
            uint8_t _pad0859[0x7]; // 0x859
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x860            
            source2sdk::entity2::CEntityIOOutput m_OnPressed; // 0x878            
            source2sdk::entity2::CEntityIOOutput m_OnUseLocked; // 0x890            
            source2sdk::entity2::CEntityIOOutput m_OnIn; // 0x8a8            
            source2sdk::entity2::CEntityIOOutput m_OnOut; // 0x8c0            
            // metadata: MNotSaved
            std::int32_t m_nState; // 0x8d8            
            CEntityHandle m_hConstraint; // 0x8dc            
            CEntityHandle m_hConstraintParent; // 0x8e0            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0x8e4            
            uint8_t _pad08e5[0x3]; // 0x8e5
            CUtlSymbolLarge m_sGlowEntity; // 0x8e8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_glowEntity;
            char m_glowEntity[0x4]; // 0x8f0            
            // metadata: MNetworkEnable
            bool m_usable; // 0x8f4            
            uint8_t _pad08f5[0x3]; // 0x8f5
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            CUtlSymbolLarge m_szDisplayText; // 0x8f8            
            
            // Datamap fields:
            //  m_ls.sLockedSound; // 0x818
            //  m_ls.sUnlockedSound; // 0x820
            // void CBaseButtonButtonTouch; // 0x0
            // void CBaseButtonButtonSpark; // 0x0
            // void CBaseButtonTriggerAndWait; // 0x0
            // void CBaseButtonButtonReturn; // 0x0
            // void CBaseButtonButtonBackHome; // 0x0
            // void CBaseButtonButtonUse; // 0x0
            // void CBaseButtonActivateTouch; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPress; // 0x0
            // void InputPressIn; // 0x0
            // void InputPressOut; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlString displaytext; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseButton) == 0x900);
    };
};
