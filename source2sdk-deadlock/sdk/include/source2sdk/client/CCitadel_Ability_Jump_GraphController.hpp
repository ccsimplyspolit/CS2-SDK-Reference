#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x110
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Jump_GraphController : public source2sdk::client::CCitadelBaseAbilityGraphController
        {
        public:
            // m_bDashJump has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bDashJump;
            char m_bDashJump[0x28]; // 0x90            
            // m_bJump has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bJump;
            char m_bJump[0x28]; // 0xb8            
            // m_pszLaunchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_pszLaunchType;
            char m_pszLaunchType[0x30]; // 0xe0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump_GraphController) == 0x110);
    };
};
