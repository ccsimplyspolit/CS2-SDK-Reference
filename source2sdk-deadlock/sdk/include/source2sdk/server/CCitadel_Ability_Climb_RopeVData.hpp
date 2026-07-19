#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x18a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Climb_RopeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flMinButtonHoldTimeToActivate; // 0x1818            
            float m_flClimbSpeedUp; // 0x181c            
            float m_flClimbSpeedDown; // 0x1820            
            float m_flClimbSpeedDownMax; // 0x1824            
            float m_flClimbDownAccelTime; // 0x1828            
            float m_flLatchSpeed; // 0x182c            
            float m_flAttachOffset; // 0x1830            
            float m_flMinReconnectTime; // 0x1834            
            float m_flSideMoveReduction; // 0x1838            
            float m_flTopOffset; // 0x183c            
            float m_flBottomOffset; // 0x1840            
            float m_flTraceRadiusSize; // 0x1844            
            float m_flStopTimeToShoot; // 0x1848            
            float m_flJumpOffVertical; // 0x184c            
            float m_flJumpOffHorizontal; // 0x1850            
            float m_flDuckOffVertical; // 0x1854            
            float m_flDuckOffHorizontal; // 0x1858            
            float m_flActivateRange; // 0x185c            
            float m_flJumpToRoofRayCheckDist; // 0x1860            
            float m_flMinTimeToRoofCheck; // 0x1864            
            float m_flTimeToHintRefresh; // 0x1868            
            float m_iMaxHintCount; // 0x186c            
            float m_flClimbRopeSlowDurationOnHit; // 0x1870            
            float m_flCameraRotateSpeed; // 0x1874            
            float m_flCameraRotateMaxTime; // 0x1878            
            uint8_t _pad187c[0x4]; // 0x187c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ClimbRopeSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowOnHitModifier;
            char m_ClimbRopeSlowOnHitModifier[0x10]; // 0x1880            
            // m_ClimbRopeSlowFromRecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowFromRecentDamageModifier;
            char m_ClimbRopeSlowFromRecentDamageModifier[0x10]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Climb_RopeVData) == 0x18a0);
    };
};
