#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_Doorman_Hotel_Imposter_FX.hpp"

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
        // Size: 0x770
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierDoormanHotelImposterVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // m_ImposterModifierFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_Doorman_Hotel_Imposter_FX> m_ImposterModifierFX;
            char m_ImposterModifierFX[0x10]; // 0x750            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strKeyTurnSound; // 0x760            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierDoormanHotelImposterVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierDoormanHotelImposterVData) == 0x770);
    };
};
