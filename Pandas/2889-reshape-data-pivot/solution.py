import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    pdf=weather.pivot(
        index="month",
        columns="city",
        values="temperature"
    )
    return pdf