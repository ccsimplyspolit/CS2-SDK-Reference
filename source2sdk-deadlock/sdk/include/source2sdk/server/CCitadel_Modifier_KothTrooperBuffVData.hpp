#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x7c8
        // Has VTable
        //
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_KothTrooperBuffVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // m_vecHealthPercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecHealthPercents;
            char m_vecHealthPercents[0x18]; // 0x750
            // m_vecDamagePercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecDamagePercents;
            char m_vecDamagePercents[0x18]; // 0x768
            // vecSpiritResistPercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> vecSpiritResistPercents;
            char vecSpiritResistPercents[0x18]; // 0x780
            // vecMeleeResistPercents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> vecMeleeResistPercents;
            char vecMeleeResistPercents[0x18]; // 0x798
            // m_vecModelScaleFractions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecModelScaleFractions;
            char m_vecModelScaleFractions[0x18]; // 0x7b0
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CCitadel_Modifier_KothTrooperBuffVData because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_KothTrooperBuffVData) == 0x7c8);
    };
};
