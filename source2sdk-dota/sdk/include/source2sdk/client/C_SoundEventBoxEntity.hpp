#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundEventMultiPointEntity.hpp"
#include "source2sdk/client/SoundeventBoxHelperNetworked_t.hpp"

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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_SoundEventBoxEntity : public source2sdk::client::C_SoundEventMultiPointEntity
        {
        public:
            // metadata: MNotSaved
            // m_vecBoxHelpersNetworked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::SoundeventBoxHelperNetworked_t> m_vecBoxHelpersNetworked;
            char m_vecBoxHelpersNetworked[0x18]; // 0x6b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventBoxEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventBoxEntity) == 0x6c8);
    };
};
