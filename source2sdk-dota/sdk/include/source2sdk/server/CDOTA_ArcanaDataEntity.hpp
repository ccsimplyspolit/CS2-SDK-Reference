#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_ArcanaDataEntity_DrowRanger;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_ArcanaDataEntity_FacelessVoid;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_ArcanaDataEntity_Razor;
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
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::server::CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // 0x498            
            source2sdk::server::CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // 0x4a0            
            source2sdk::server::CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // 0x4a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ArcanaDataEntity) == 0x4b0);
    };
};
