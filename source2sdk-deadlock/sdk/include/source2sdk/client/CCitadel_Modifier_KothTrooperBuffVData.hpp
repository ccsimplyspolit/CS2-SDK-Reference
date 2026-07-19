#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x798
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_KothTrooperBuffVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // m_vecHealthPercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecHealthPercents;
            char m_vecHealthPercents[0x18]; // 0x750            
            // m_vecDamagePercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecDamagePercents;
            char m_vecDamagePercents[0x18]; // 0x768            
            // m_vecModelScaleFractions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecModelScaleFractions;
            char m_vecModelScaleFractions[0x18]; // 0x780            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_KothTrooperBuffVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_KothTrooperBuffVData) == 0x798);
    };
};
